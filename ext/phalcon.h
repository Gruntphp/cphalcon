/*
 * phalcon.h
 *
 *  Created on: 11 січ. 2014
 *      Author: vladimir
 */

#ifndef PHALCON_H
#define PHALCON_H

#include "acl.h"
#include "acl/adapter.h"
#include "acl/adapterinterface.h"
#include "acl/adapter/memory.h"
#include "acl/exception.h"
#include "acl/resource.h"
#include "acl/resourceinterface.h"
#include "acl/role.h"
#include "acl/roleinterface.h"

#include "annotations/adapter.h"
#include "annotations/adapterinterface.h"
#include "annotations/adapter/apc.h"
#include "annotations/adapter/files.h"
#include "annotations/adapter/memory.h"
#include "annotations/adapter/xcache.h"
#include "annotations/annotation.h"
#include "annotations/collection.h"
#include "annotations/exception.h"
#include "annotations/reader.h"
#include "annotations/readerinterface.h"
#include "annotations/reflection.h"

#include "assets/collection.h"
#include "assets/exception.h"
#include "assets/filterinterface.h"
#include "assets/filters/none.h"
#include "assets/filters/cssmin.h"
#include "assets/filters/jsmin.h"
#include "assets/manager.h"
#include "assets/resource.h"
#include "assets/resource/js.h"
#include "assets/resource/css.h"

#include "cache/backend.h"
#include "cache/backendinterface.h"
#include "cache/backend/apc.h"
#include "cache/backend/file.h"
#include "cache/backend/libmemcached.h"
#include "cache/backend/memcache.h"
#include "cache/backend/memory.h"
#include "cache/backend/mongo.h"
#include "cache/backend/xcache.h"
#include "cache/exception.h"
#include "cache/frontendinterface.h"
#include "cache/frontend/base64.h"
#include "cache/frontend/data.h"
#include "cache/frontend/igbinary.h"
#include "cache/frontend/json.h"
#include "cache/frontend/none.h"
#include "cache/frontend/output.h"
#include "cache/multiple.h"

#include "cli/console.h"
#include "cli/console/exception.h"
#include "cli/dispatcher.h"
#include "cli/dispatcher/exception.h"
#include "cli/router.h"
#include "cli/router/exception.h"
#include "cli/task.h"

#include "pconfig.h"
#include "config/adapter/ini.h"
#include "config/adapter/json.h"
#include "config/adapter/php.h"
#include "config/exception.h"

#include "crypt.h"
#include "cryptinterface.h"
#include "crypt/exception.h"

#include "db.h"
#include "db/adapter.h"
#include "db/adapterinterface.h"
#include "db/adapter/pdo.h"
#include "db/adapter/pdo/mysql.h"
#include "db/adapter/pdo/oracle.h"
#include "db/adapter/pdo/postgresql.h"
#include "db/adapter/pdo/sqlite.h"
#include "db/column.h"
#include "db/columninterface.h"
#include "db/dialect.h"
#include "db/dialectinterface.h"
#include "db/dialect/mysql.h"
#include "db/dialect/oracle.h"
#include "db/dialect/postgresql.h"
#include "db/dialect/sqlite.h"
#include "db/exception.h"
#include "db/index.h"
#include "db/indexinterface.h"
#include "db/profiler.h"
#include "db/profiler/item.h"
#include "db/rawvalue.h"
#include "db/reference.h"
#include "db/referenceinterface.h"
#include "db/resultinterface.h"
#include "db/result/pdo.h"

#include "debug.h"

#include "di.h"
#include "diinterface.h"
#include "di/exception.h"
#include "di/factorydefault.h"
#include "di/factorydefault/cli.h"
#include "di/injectionawareinterface.h"
#include "di/injectable.h"
#include "di/service.h"
#include "di/serviceinterface.h"
#include "di/service/builder.h"

#include "dispatcher.h"
#include "dispatcherinterface.h"

#include "escaper.h"
#include "escaperinterface.h"
#include "escaper/exception.h"

#include "events/event.h"
#include "events/eventsawareinterface.h"
#include "events/exception.h"
#include "events/managerinterface.h"
#include "events/manager.h"

#include "exception.h"

#include "filter.h"
#include "filterinterface.h"
#include "filter/exception.h"
#include "filter/userfilterinterface.h"

#include "flash.h"
#include "flashinterface.h"
#include "flash/direct.h"
#include "flash/exception.h"
#include "flash/session.h"

#include "forms/element.h"
#include "forms/elementinterface.h"
#include "forms/element/check.h"
#include "forms/element/date.h"
#include "forms/element/email.h"
#include "forms/element/file.h"
#include "forms/element/hidden.h"
#include "forms/element/numeric.h"
#include "forms/element/password.h"
#include "forms/element/radio.h"
#include "forms/element/select.h"
#include "forms/element/submit.h"
#include "forms/element/text.h"
#include "forms/element/textarea.h"
#include "forms/exception.h"
#include "forms/form.h"
#include "forms/manager.h"

#include "http/cookie.h"
#include "http/cookie/exception.h"
#include "http/request.h"
#include "http/requestinterface.h"
#include "http/request/exception.h"
#include "http/request/file.h"
#include "http/request/fileinterface.h"
#include "http/response.h"
#include "http/responseinterface.h"
#include "http/response/cookies.h"
#include "http/response/cookiesinterface.h"
#include "http/response/exception.h"
#include "http/response/headers.h"
#include "http/response/headersinterface.h"

#include "image.h"
#include "image/adapter.h"
#include "image/adapterinterface.h"
#include "image/adapter/gd.h"
#include "image/adapter/imagick.h"
#include "image/exception.h"

#include "kernel.h"

#include "loader.h"
#include "loader/exception.h"

#include "logger.h"
#include "logger/adapter.h"
#include "logger/adapterinterface.h"
#include "logger/adapter/file.h"
#include "logger/adapter/firephp.h"
#include "logger/adapter/stream.h"
#include "logger/adapter/syslog.h"
#include "logger/exception.h"
#include "logger/formatter.h"
#include "logger/formatterinterface.h"
#include "logger/formatter/firephp.h"
#include "logger/formatter/json.h"
#include "logger/formatter/line.h"
#include "logger/formatter/syslog.h"
#include "logger/item.h"
#include "logger/multiple.h"

#include "mvc/application.h"
#include "mvc/application/exception.h"
#include "mvc/collection.h"
#include "mvc/collectioninterface.h"
#include "mvc/collection/document.h"
#include "mvc/collection/exception.h"
#include "mvc/collection/manager.h"
#include "mvc/collection/managerinterface.h"
#include "mvc/controller.h"
#include "mvc/controllerinterface.h"
#include "mvc/dispatcher.h"
#include "mvc/dispatcherinterface.h"
#include "mvc/dispatcher/exception.h"
#include "mvc/micro.h"
#include "mvc/micro/collection.h"
#include "mvc/micro/collectioninterface.h"
#include "mvc/micro/exception.h"
#include "mvc/micro/lazyloader.h"
#include "mvc/micro/middlewareinterface.h"
#include "mvc/model.h"
#include "mvc/modelinterface.h"
#include "mvc/model/behavior.h"
#include "mvc/model/behaviorinterface.h"
#include "mvc/model/behavior/softdelete.h"
#include "mvc/model/behavior/timestampable.h"
#include "mvc/model/criteria.h"
#include "mvc/model/criteriainterface.h"
#include "mvc/model/exception.h"
#include "mvc/model/manager.h"
#include "mvc/model/managerinterface.h"
#include "mvc/model/message.h"
#include "mvc/model/messageinterface.h"
#include "mvc/model/metadata.h"
#include "mvc/model/metadatainterface.h"
#include "mvc/model/metadata/apc.h"
#include "mvc/model/metadata/files.h"
#include "mvc/model/metadata/memory.h"
#include "mvc/model/metadata/xcache.h"
#include "mvc/model/metadata/session.h"
#include "mvc/model/metadata/strategy/annotations.h"
#include "mvc/model/metadata/strategy/introspection.h"
#include "mvc/model/query.h"
#include "mvc/model/queryinterface.h"
#include "mvc/model/query/builder.h"
#include "mvc/model/query/builderinterface.h"
#include "mvc/model/query/lang.h"
#include "mvc/model/query/status.h"
#include "mvc/model/query/statusinterface.h"
#include "mvc/model/relation.h"
#include "mvc/model/relationinterface.h"
#include "mvc/model/resultinterface.h"
#include "mvc/model/resultset.h"
#include "mvc/model/resultsetinterface.h"
#include "mvc/model/resultset/complex.h"
#include "mvc/model/resultset/simple.h"
#include "mvc/model/row.h"
#include "mvc/model/transaction.h"
#include "mvc/model/transactioninterface.h"
#include "mvc/model/transaction/exception.h"
#include "mvc/model/transaction/failed.h"
#include "mvc/model/transaction/manager.h"
#include "mvc/model/transaction/managerinterface.h"
#include "mvc/model/validationfailed.h"
#include "mvc/model/validator.h"
#include "mvc/model/validatorinterface.h"
#include "mvc/model/validator/email.h"
#include "mvc/model/validator/exclusionin.h"
#include "mvc/model/validator/inclusionin.h"
#include "mvc/model/validator/numericality.h"
#include "mvc/model/validator/presenceof.h"
#include "mvc/model/validator/regex.h"
#include "mvc/model/validator/stringlength.h"
#include "mvc/model/validator/uniqueness.h"
#include "mvc/model/validator/url.h"
#include "mvc/model/validator/json.h"
#include "mvc/moduledefinitioninterface.h"
#include "mvc/router.h"
#include "mvc/routerinterface.h"
#include "mvc/router/annotations.h"
#include "mvc/router/exception.h"
#include "mvc/router/group.h"
#include "mvc/router/route.h"
#include "mvc/router/routeinterface.h"
#include "mvc/url.h"
#include "mvc/urlinterface.h"
#include "mvc/url/exception.h"
#include "mvc/user/component.h"
#include "mvc/user/module.h"
#include "mvc/user/plugin.h"
#include "mvc/view.h"
#include "mvc/viewinterface.h"
#include "mvc/view/engine.h"
#include "mvc/view/engineinterface.h"
#include "mvc/view/engine/php.h"
#include "mvc/view/engine/volt.h"
#include "mvc/view/engine/volt/compiler.h"
#include "mvc/view/exception.h"
#include "mvc/view/simple.h"

#include "paginator/adapterinterface.h"
#include "paginator/adapter/model.h"
#include "paginator/adapter/nativearray.h"
#include "paginator/adapter/querybuilder.h"
#include "paginator/exception.h"

#include "psr/log/abstractlogger.h"
#include "psr/log/invalidargumentexception.h"
#include "psr/log/loggerawareinterface.h"
#include "psr/log/loggerawaretrait.h"
#include "psr/log/loggerinterface.h"
#include "psr/log/loggertrait.h"
#include "psr/log/loglevel.h"
#include "psr/log/nulllogger.h"

#include "queue/beanstalk.h"
#include "queue/beanstalk/job.h"

#include "registry.h"

#include "security.h"
#include "security/exception.h"

#include "session/adapter.h"
#include "session/adapterinterface.h"
#include "session/adapter/files.h"
#include "session/bag.h"
#include "session/baginterface.h"
#include "session/exception.h"

#include "tag.h"
#include "tag/exception.h"
#include "tag/select.h"

#include "translate/adapter.h"
#include "translate/adapterinterface.h"
#include "translate/adapter/nativearray.h"
#include "translate/exception.h"

#include "text.h"
#include "arr.h"

#include "date.h"

#include "validation.h"
#include "validation/exception.h"
#include "validation/message.h"
#include "validation/message/group.h"
#include "validation/validator.h"
#include "validation/validatorinterface.h"
#include "validation/validator/between.h"
#include "validation/validator/confirmation.h"
#include "validation/validator/email.h"
#include "validation/validator/exclusionin.h"
#include "validation/validator/identical.h"
#include "validation/validator/inclusionin.h"
#include "validation/validator/presenceof.h"
#include "validation/validator/regex.h"
#include "validation/validator/stringlength.h"
#include "validation/validator/url.h"

#include "version.h"

#endif /* PHALCON_H */
