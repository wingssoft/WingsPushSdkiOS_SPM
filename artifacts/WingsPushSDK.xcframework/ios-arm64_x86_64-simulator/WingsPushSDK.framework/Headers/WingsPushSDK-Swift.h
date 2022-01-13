#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef WINGSPUSHSDK_SWIFT_H
#define WINGSPUSHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WingsPushSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC12WingsPushSDK13BaseApiResult")
@interface BaseApiResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Channel")
@interface Channel : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Message;
@class NSSet;

@interface Channel (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end

@class NSString;

@interface Channel (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@end


SWIFT_CLASS("_TtC12WingsPushSDK21ContentDownloadResult")
@interface ContentDownloadResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ExtraContent")
@interface ExtraContent : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP12WingsPushSDK20ExtraContentProtocol_")
@protocol ExtraContentProtocol
@property (nonatomic, readonly, copy) NSString * _Nullable mimeType;
@property (nonatomic, readonly, copy) NSString * _Nullable value;
@property (nonatomic, readonly, copy) NSString * _Nullable messageId;
@end


@interface ExtraContent (SWIFT_EXTENSION(WingsPushSDK)) <ExtraContentProtocol>
@property (nonatomic, copy) NSString * _Nullable messageId;
@property (nonatomic, copy) NSString * _Nullable mimeType;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, strong) Message * _Nullable messageLink;
@end




SWIFT_PROTOCOL("_TtP12WingsPushSDK34HttpRequestAdditionalHeaderManager_")
@protocol HttpRequestAdditionalHeaderManager
- (NSDictionary<NSString *, NSString *> * _Nonnull)getAdditionalHeadersWithRequestUri:(NSString * _Nonnull)requestUri SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("Icon")
@interface Icon : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Icon (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end


@interface Icon (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@end


SWIFT_CLASS_NAMED("LoggingUtils")
@interface LoggingUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSDate;

SWIFT_CLASS_NAMED("Message")
@interface Message : NSManagedObject
@property (nonatomic, copy) NSString * _Nullable statusName;
@property (nonatomic, copy) NSDate * _Nullable statusDate;
@property (nonatomic, copy) NSString * _Nullable channelName;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class MessageStatus;

@interface Message (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)removeMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)addMessageStatusLinks:(NSSet * _Nonnull)values;
- (void)removeMessageStatusLinks:(NSSet * _Nonnull)values;
@end

@class NSNumber;
@class MessageAttributes;

SWIFT_PROTOCOL("_TtP12WingsPushSDK15MessageProtocol_")
@protocol MessageProtocol
/// Message Id
@property (nonatomic, readonly, copy) NSString * _Nullable id;
/// Title for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable title;
/// Subtitle for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
/// Body for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable body;
/// Date of Message creation
@property (nonatomic, readonly, copy) NSDate * _Nullable messageDate;
/// Available Content
@property (nonatomic, readonly) BOOL contentAvailable;
/// tied entity MessageStatus + duplication in Message entity
/// current Status for message
@property (nonatomic, copy) NSString * _Nullable statusName;
/// Last Status Date
@property (nonatomic, readonly, copy) NSDate * _Nullable statusDate;
/// Channel name + SET wraper for tied entity Channel.name ??? Should we ??? should.
@property (nonatomic, copy) NSString * _Nullable channelName;
@property (nonatomic, strong) Icon * _Nullable iconLink;
@property (nonatomic, strong) MessageAttributes * _Nullable messageAttributesLink;
@end

@class Status;

@interface Message (SWIFT_EXTENSION(WingsPushSDK)) <MessageProtocol>
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL contentAvailable;
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable subtitle;
@property (nonatomic, copy) NSDate * _Nullable messageDate;
@property (nonatomic, strong) Status * _Nullable statusLink;
@property (nonatomic, copy) NSDate * _Nullable statusDateInternal;
@property (nonatomic, copy) NSString * _Nullable statusNameInternal;
@property (nonatomic, strong) NSSet * _Nullable messageStatusLinks;
@property (nonatomic, copy) NSString * _Nullable channelNameInternal;
@property (nonatomic, strong) Channel * _Nullable channelLink;
@property (nonatomic, strong) ExtraContent * _Nullable extraContentLink;
@property (nonatomic, strong) Icon * _Nullable iconLink;
@property (nonatomic, strong) MessageAttributes * _Nullable messageAttributesLink;
@end


SWIFT_CLASS_NAMED("MessageAttributes")
@interface MessageAttributes : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MessageAttributes (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinkObject:(Message * _Nonnull)value;
- (void)removeMessageLinkObject:(Message * _Nonnull)value;
- (void)addMessageLink:(NSSet * _Nonnull)values;
- (void)removeMessageLink:(NSSet * _Nonnull)values;
@end


@interface MessageAttributes (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic) int16_t classifierdId;
@property (nonatomic, copy) NSString * _Nullable classifierName;
@property (nonatomic) int16_t isImportant;
@property (nonatomic, copy) NSDate * _Nullable messageDate;
@property (nonatomic, copy) NSString * _Nullable messageId;
@property (nonatomic, strong) NSSet * _Nullable messageLink;
@end



SWIFT_CLASS_NAMED("MessageStatus")
@interface MessageStatus : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MessageStatus (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic) BOOL isSentInternal;
@property (nonatomic, copy) NSDate * _Nullable statusDateInternal;
@property (nonatomic, copy) NSString * _Nullable statusNameInternal;
@property (nonatomic, strong) Message * _Nullable messageLink;
@property (nonatomic, strong) Status * _Nullable statusLink;
@end



SWIFT_CLASS_NAMED("PushSDK")
@interface PushSDK : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("SettingsUtils")
@interface SettingsUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface SettingsUtils (SWIFT_EXTENSION(WingsPushSDK)) <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURL;
@class NSManagedObjectModel;

SWIFT_CLASS("_TtC12WingsPushSDK25SharedPersistentContainer")
@interface SharedPersistentContainer : NSPersistentContainer
+ (NSURL * _Nonnull)defaultDirectoryURL SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name managedObjectModel:(NSManagedObjectModel * _Nonnull)model OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC12WingsPushSDK16StatisticsResult")
@interface StatisticsResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("Status")
@interface Status : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)removeMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)addMessageStatusLinks:(NSSet * _Nonnull)values;
- (void)removeMessageStatusLinks:(NSSet * _Nonnull)values;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@property (nonatomic, strong) NSSet * _Nullable messageStatusLinks;
@end


SWIFT_CLASS("_TtC12WingsPushSDK19SubscriberGetResult")
@interface SubscriberGetResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIResponder;

@interface UIApplication (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, readonly, strong) UIResponder * _Nullable nextResponder;
@end





SWIFT_CLASS("_TtC12WingsPushSDK11UUIDManager")
@interface UUIDManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// Class for logging excessive blocking on the main thread.
SWIFT_CLASS("_TtC12WingsPushSDK8Watchdog")
@interface Watchdog : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double defaultThreshold;)
+ (double)defaultThreshold SWIFT_WARN_UNUSED_RESULT;
/// Convenience initializer that allows you to construct a <code>WatchDog</code> object with default behavior.
/// \param threshold number of seconds that must pass to consider the main thread blocked.
///
/// \param strictMode boolean value that stops the execution whenever the threshold is reached.
///
- (nonnull instancetype)initWithThreshold:(double)threshold strictMode:(BOOL)strictMode;
/// Default initializer that allows you to construct a <code>WatchDog</code> object specifying a custom callback.
/// \param threshold number of seconds that must pass to consider the main thread blocked.
///
/// \param watchdogFiredCallback a callback that will be called when the the threshold is reached
///
- (nonnull instancetype)initWithThreshold:(double)threshold watchdogFiredCallback:(void (^ _Nonnull)(void))watchdogFiredCallback OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef WINGSPUSHSDK_SWIFT_H
#define WINGSPUSHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WingsPushSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC12WingsPushSDK13BaseApiResult")
@interface BaseApiResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Channel")
@interface Channel : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Message;
@class NSSet;

@interface Channel (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end

@class NSString;

@interface Channel (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@end


SWIFT_CLASS("_TtC12WingsPushSDK21ContentDownloadResult")
@interface ContentDownloadResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("ExtraContent")
@interface ExtraContent : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP12WingsPushSDK20ExtraContentProtocol_")
@protocol ExtraContentProtocol
@property (nonatomic, readonly, copy) NSString * _Nullable mimeType;
@property (nonatomic, readonly, copy) NSString * _Nullable value;
@property (nonatomic, readonly, copy) NSString * _Nullable messageId;
@end


@interface ExtraContent (SWIFT_EXTENSION(WingsPushSDK)) <ExtraContentProtocol>
@property (nonatomic, copy) NSString * _Nullable messageId;
@property (nonatomic, copy) NSString * _Nullable mimeType;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, strong) Message * _Nullable messageLink;
@end




SWIFT_PROTOCOL("_TtP12WingsPushSDK34HttpRequestAdditionalHeaderManager_")
@protocol HttpRequestAdditionalHeaderManager
- (NSDictionary<NSString *, NSString *> * _Nonnull)getAdditionalHeadersWithRequestUri:(NSString * _Nonnull)requestUri SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("Icon")
@interface Icon : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Icon (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end


@interface Icon (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@end


SWIFT_CLASS_NAMED("LoggingUtils")
@interface LoggingUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSDate;

SWIFT_CLASS_NAMED("Message")
@interface Message : NSManagedObject
@property (nonatomic, copy) NSString * _Nullable statusName;
@property (nonatomic, copy) NSDate * _Nullable statusDate;
@property (nonatomic, copy) NSString * _Nullable channelName;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class MessageStatus;

@interface Message (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)removeMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)addMessageStatusLinks:(NSSet * _Nonnull)values;
- (void)removeMessageStatusLinks:(NSSet * _Nonnull)values;
@end

@class NSNumber;
@class MessageAttributes;

SWIFT_PROTOCOL("_TtP12WingsPushSDK15MessageProtocol_")
@protocol MessageProtocol
/// Message Id
@property (nonatomic, readonly, copy) NSString * _Nullable id;
/// Title for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable title;
/// Subtitle for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
/// Body for Push Notification
@property (nonatomic, readonly, copy) NSString * _Nullable body;
/// Date of Message creation
@property (nonatomic, readonly, copy) NSDate * _Nullable messageDate;
/// Available Content
@property (nonatomic, readonly) BOOL contentAvailable;
/// tied entity MessageStatus + duplication in Message entity
/// current Status for message
@property (nonatomic, copy) NSString * _Nullable statusName;
/// Last Status Date
@property (nonatomic, readonly, copy) NSDate * _Nullable statusDate;
/// Channel name + SET wraper for tied entity Channel.name ??? Should we ??? should.
@property (nonatomic, copy) NSString * _Nullable channelName;
@property (nonatomic, strong) Icon * _Nullable iconLink;
@property (nonatomic, strong) MessageAttributes * _Nullable messageAttributesLink;
@end

@class Status;

@interface Message (SWIFT_EXTENSION(WingsPushSDK)) <MessageProtocol>
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL contentAvailable;
@property (nonatomic, copy) NSString * _Nullable body;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable subtitle;
@property (nonatomic, copy) NSDate * _Nullable messageDate;
@property (nonatomic, strong) Status * _Nullable statusLink;
@property (nonatomic, copy) NSDate * _Nullable statusDateInternal;
@property (nonatomic, copy) NSString * _Nullable statusNameInternal;
@property (nonatomic, strong) NSSet * _Nullable messageStatusLinks;
@property (nonatomic, copy) NSString * _Nullable channelNameInternal;
@property (nonatomic, strong) Channel * _Nullable channelLink;
@property (nonatomic, strong) ExtraContent * _Nullable extraContentLink;
@property (nonatomic, strong) Icon * _Nullable iconLink;
@property (nonatomic, strong) MessageAttributes * _Nullable messageAttributesLink;
@end


SWIFT_CLASS_NAMED("MessageAttributes")
@interface MessageAttributes : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MessageAttributes (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinkObject:(Message * _Nonnull)value;
- (void)removeMessageLinkObject:(Message * _Nonnull)value;
- (void)addMessageLink:(NSSet * _Nonnull)values;
- (void)removeMessageLink:(NSSet * _Nonnull)values;
@end


@interface MessageAttributes (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic) int16_t classifierdId;
@property (nonatomic, copy) NSString * _Nullable classifierName;
@property (nonatomic) int16_t isImportant;
@property (nonatomic, copy) NSDate * _Nullable messageDate;
@property (nonatomic, copy) NSString * _Nullable messageId;
@property (nonatomic, strong) NSSet * _Nullable messageLink;
@end



SWIFT_CLASS_NAMED("MessageStatus")
@interface MessageStatus : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface MessageStatus (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic) BOOL isSentInternal;
@property (nonatomic, copy) NSDate * _Nullable statusDateInternal;
@property (nonatomic, copy) NSString * _Nullable statusNameInternal;
@property (nonatomic, strong) Message * _Nullable messageLink;
@property (nonatomic, strong) Status * _Nullable statusLink;
@end



SWIFT_CLASS_NAMED("PushSDK")
@interface PushSDK : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("SettingsUtils")
@interface SettingsUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface SettingsUtils (SWIFT_EXTENSION(WingsPushSDK)) <NSCopying>
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURL;
@class NSManagedObjectModel;

SWIFT_CLASS("_TtC12WingsPushSDK25SharedPersistentContainer")
@interface SharedPersistentContainer : NSPersistentContainer
+ (NSURL * _Nonnull)defaultDirectoryURL SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name managedObjectModel:(NSManagedObjectModel * _Nonnull)model OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC12WingsPushSDK16StatisticsResult")
@interface StatisticsResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("Status")
@interface Status : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageLinksObject:(Message * _Nonnull)value;
- (void)removeMessageLinksObject:(Message * _Nonnull)value;
- (void)addMessageLinks:(NSSet * _Nonnull)values;
- (void)removeMessageLinks:(NSSet * _Nonnull)values;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
- (void)addMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)removeMessageStatusLinksObject:(MessageStatus * _Nonnull)value;
- (void)addMessageStatusLinks:(NSSet * _Nonnull)values;
- (void)removeMessageStatusLinks:(NSSet * _Nonnull)values;
@end


@interface Status (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) NSSet * _Nullable messageLinks;
@property (nonatomic, strong) NSSet * _Nullable messageStatusLinks;
@end


SWIFT_CLASS("_TtC12WingsPushSDK19SubscriberGetResult")
@interface SubscriberGetResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIResponder;

@interface UIApplication (SWIFT_EXTENSION(WingsPushSDK))
@property (nonatomic, readonly, strong) UIResponder * _Nullable nextResponder;
@end





SWIFT_CLASS("_TtC12WingsPushSDK11UUIDManager")
@interface UUIDManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// Class for logging excessive blocking on the main thread.
SWIFT_CLASS("_TtC12WingsPushSDK8Watchdog")
@interface Watchdog : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double defaultThreshold;)
+ (double)defaultThreshold SWIFT_WARN_UNUSED_RESULT;
/// Convenience initializer that allows you to construct a <code>WatchDog</code> object with default behavior.
/// \param threshold number of seconds that must pass to consider the main thread blocked.
///
/// \param strictMode boolean value that stops the execution whenever the threshold is reached.
///
- (nonnull instancetype)initWithThreshold:(double)threshold strictMode:(BOOL)strictMode;
/// Default initializer that allows you to construct a <code>WatchDog</code> object specifying a custom callback.
/// \param threshold number of seconds that must pass to consider the main thread blocked.
///
/// \param watchdogFiredCallback a callback that will be called when the the threshold is reached
///
- (nonnull instancetype)initWithThreshold:(double)threshold watchdogFiredCallback:(void (^ _Nonnull)(void))watchdogFiredCallback OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
