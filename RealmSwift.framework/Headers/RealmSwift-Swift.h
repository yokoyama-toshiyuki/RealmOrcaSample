// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Realm;
@import ObjectiveC;
@import Foundation;
@import Realm.Private;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class RLMRealm;
@class RLMObjectSchema;
@class RLMSchema;

/**
  \code
  Object
  \endcode is a class used to define Realm model objects.
  In Realm you define your model classes by subclassing \code
  Object
  \endcode and adding properties to be managed.
  You then instantiate and use your custom subclasses instead of using the \code
  Object
  \endcode class directly.
  \code
  class Dog: Object {
      dynamic var name: String = ""
      dynamic var adopted: Bool = false
      let siblings = List<Dog>()
  }

  \endcode<h3>Supported property types</h3>
  <ul>
    <li>
      \code
      String
      \endcode, \code
      NSString
      \endcode
    </li>
    <li>
      \code
      Int
      \endcode
    </li>
    <li>
      \code
      Int8
      \endcode, \code
      Int16
      \endcode, \code
      Int32
      \endcode, \code
      Int64
      \endcode
    </li>
    <li>
      \code
      Float
      \endcode
    </li>
    <li>
      \code
      Double
      \endcode
    </li>
    <li>
      \code
      Bool
      \endcode
    </li>
    <li>
      \code
      Date
      \endcode, \code
      NSDate
      \endcode
    </li>
    <li>
      \code
      Data
      \endcode, \code
      NSData
      \endcode
    </li>
    <li>
      \code
      RealmOptional<T>
      \endcode for optional numeric properties
    </li>
    <li>
      \code
      Object
      \endcode subclasses, to model many-to-one relationships
    </li>
    <li>
      \code
      List<T>
      \endcode, to model many-to-many relationships
    </li>
  </ul>
  \code
  String
  \endcode, \code
  NSString
  \endcode, \code
  Date
  \endcode, \code
  NSDate
  \endcode, \code
  Data
  \endcode, \code
  NSData
  \endcode and \code
  Object
  \endcode subclass properties can be declared as optional.
  \code
  Int
  \endcode, \code
  Int8
  \endcode, \code
  Int16
  \endcode, \code
  Int32
  \endcode, \code
  Int64
  \endcode, \code
  Float
  \endcode, \code
  Double
  \endcode, \code
  Bool
  \endcode, and \code
  List
  \endcode properties cannot. To store an optional
  number, use \code
  RealmOptional<Int>
  \endcode, \code
  RealmOptional<Float>
  \endcode, \code
  RealmOptional<Double>
  \endcode, or \code
  RealmOptional<Bool>
  \endcode instead,
  which wraps an optional numeric value.
  All property types except for \code
  List
  \endcode and \code
  RealmOptional
  \endcode <em>must</em> be declared as \code
  dynamic var
  \endcode. \code
  List
  \endcode and
  \code
  RealmOptional
  \endcode properties must be declared as non-dynamic \code
  let
  \endcode properties. Swift \code
  lazy
  \endcode properties are not allowed.
  Note that none of the restrictions listed above apply to properties that are configured to be ignored by Realm.
  <h3>Querying</h3>
  You can retrieve all objects of a given type from a Realm by calling the \code
  objects(_:)
  \endcode instance method.
  <h3>Relationships</h3>
  See our <a href="http://realm.io/docs/cocoa">Cocoa guide</a> for more details.
*/
SWIFT_CLASS_NAMED("Object")
@interface RealmSwiftObject : RLMObjectBase
/**
  Creates an unmanaged instance of a Realm object.
  Call \code
  add(_:)
  \endcode on a \code
  Realm
  \endcode instance to add an unmanaged object into that Realm.
  <ul>
    <li>
      see: \code
      Realm().add(_:)
      \endcode
    </li>
  </ul>
*/
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/**
  Creates an unmanaged instance of a Realm object.
  The \code
  value
  \endcode argument is used to populate the object. It can be a key-value coding compliant object, an array or
  dictionary returned from the methods in \code
  NSJSONSerialization
  \endcode, or an \code
  Array
  \endcode containing one element for each
  managed property. An exception will be thrown if any required properties are not present and those properties were
  not defined with default values.
  When passing in an \code
  Array
  \endcode as the \code
  value
  \endcode argument, all properties must be present, valid and in the same order as
  the properties defined in the model.
  Call \code
  add(_:)
  \endcode on a \code
  Realm
  \endcode instance to add an unmanaged object into that Realm.
  \param value The value used to populate the object.

*/
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
/**
  Indicates if the object can no longer be accessed because it is now invalid.
  An object can no longer be accessed if the object has been deleted from the Realm that manages it, or if
  \code
  invalidate()
  \endcode is called on that Realm.
*/
@property (nonatomic, readonly) BOOL isInvalidated;
/**
  A human-readable description of the object.
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/**
  Helper to return the class name for an Object subclass.
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull className;
/**
  WARNING: This is an internal helper method not intended for public use.
  :nodoc:
*/
+ (Class _Nonnull)objectUtilClass:(BOOL)isSwift;
/**
  Override this method to specify the name of a property to be used as the primary key.
  Only properties of types \code
  String
  \endcode and \code
  Int
  \endcode can be designated as the primary key. Primary key properties enforce
  uniqueness for each value whenever the property is set, which incurs minor overhead. Indexes are created
  automatically for primary key properties.

  returns:
  The name of the property designated as the primary key, or \code
  nil
  \endcode if the model has no primary key.
*/
+ (NSString * _Nullable)primaryKey;
/**
  Override this method to specify the names of properties to ignore. These properties will not be managed by
  the Realm that manages the object.

  returns:
  An array of property names to ignore.
*/
+ (NSArray<NSString *> * _Nonnull)ignoredProperties;
/**
  Returns an array of property names for properties which should be indexed.
  Only string, integer, boolean, \code
  Date
  \endcode, and \code
  NSDate
  \endcode properties are supported.

  returns:
  An array of property names.
*/
+ (NSArray<NSString *> * _Nonnull)indexedProperties;
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key;
- (void)setObject:(id _Nullable)value forKeyedSubscript:(NSString * _Nonnull)key;
/**
  Returns whether two Realm objects are equal.
  Objects are considered equal if and only if they are both managed by the same Realm and point to the same
  underlying object in the database.
  \param object The object to compare the receiver to.

*/
- (BOOL)isEqual:(id _Nullable)object;
/**
  WARNING: This is an internal initializer not intended for public use.
  :nodoc:
*/
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
/**
  WARNING: This is an internal initializer not intended for public use.
  :nodoc:
*/
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/**
  Object interface which allows untyped getters and setters for Objects.
  :nodoc:
*/
SWIFT_CLASS("_TtC10RealmSwift13DynamicObject")
@interface DynamicObject : RealmSwiftObject
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key;
- (void)setObject:(id _Nullable)value forKeyedSubscript:(NSString * _Nonnull)key;
/**
  :nodoc:
*/
- (id _Nullable)valueForUndefinedKey:(NSString * _Nonnull)key;
/**
  :nodoc:
*/
- (void)setValue:(id _Nullable)value forUndefinedKey:(NSString * _Nonnull)key;
/**
  :nodoc:
*/
+ (BOOL)shouldIncludeInDefaultSchema;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


/**
  :nodoc:
  Internal class. Do not use directly. Used for reflection and initialization
*/
SWIFT_CLASS("_TtC10RealmSwift18LinkingObjectsBase")
@interface LinkingObjectsBase : NSObject <NSFastEnumeration>
@property (nonatomic, readonly, copy) NSString * _Nonnull objectClassName;
@property (nonatomic, readonly, copy) NSString * _Nonnull propertyName;
@property (nonatomic, readonly, strong) RLMResults<RLMObject *> * _Nonnull rlmResults;
- (nonnull instancetype)initFromClassName:(NSString * _Nonnull)objectClassName property:(NSString * _Nonnull)propertyName OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)countByEnumeratingWithState:(NSFastEnumerationState * _Nonnull)state objects:(id _Nullable * _Null_unspecified)buffer count:(NSInteger)len;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/**
  :nodoc:
  Internal class. Do not use directly.
*/
SWIFT_CLASS("_TtC10RealmSwift8ListBase")
@interface ListBase : RLMListBase
/**
  Returns a human-readable description of the objects contained in the List.
*/
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/**
  Returns the number of objects in this List.
*/
@property (nonatomic, readonly) NSInteger count;
- (nonnull instancetype)initWithArray:(RLMArray<RLMObject *> * _Nonnull)array OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDate (SWIFT_EXTENSION(RealmSwift))
@end


@interface NSNumber (SWIFT_EXTENSION(RealmSwift))
@end


@interface NSNumber (SWIFT_EXTENSION(RealmSwift))
@end



@interface RealmSwiftObject (SWIFT_EXTENSION(RealmSwift))
- (RLMObject * _Nonnull)unsafeCastToRLMObject;
@end


@interface RealmSwiftObject (SWIFT_EXTENSION(RealmSwift))
+ (nonnull instancetype)bridgingFrom:(id _Nonnull)objectiveCValue with:(id _Nullable)metadata;
@end


/**
  :nodoc:
  Internal class. Do not use directly.
*/
SWIFT_CLASS_NAMED("ObjectUtil")
@interface RealmSwiftObjectUtil : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RLMSyncCredentials (SWIFT_EXTENSION(RealmSwift))
@end


@interface RLMSyncManager (SWIFT_EXTENSION(RealmSwift))
/**
  The sole instance of the singleton.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RLMSyncManager * _Nonnull shared;)
+ (RLMSyncManager * _Nonnull)shared;
@end


@interface RLMSyncUser (SWIFT_EXTENSION(RealmSwift))
/**
  A dictionary of all valid, logged-in user identities corresponding to their \code
  SyncUser
  \endcode objects.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSDictionary<NSString *, RLMSyncUser *> * _Nonnull all;)
+ (NSDictionary<NSString *, RLMSyncUser *> * _Nonnull)all;
/**
  The logged-in user. \code
  nil
  \endcode if none exists.
  warning:
  Throws an Objective-C exception if more than one logged-in user exists.
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RLMSyncUser * _Nullable current;)
+ (RLMSyncUser * _Nullable)current;
@end


/**
  This model is used for requesting changes to a Realm’s permissions.
  It should be used in conjunction with an \code
  SyncUser
  \endcode’s management Realm.
  See https://realm.io/docs/realm-object-server/#permissions for general
  documentation.
*/
SWIFT_CLASS("_TtC10RealmSwift20SyncPermissionChange")
@interface SyncPermissionChange : RealmSwiftObject
/**
  The globally unique ID string of this permission change object.
*/
@property (nonatomic, copy) NSString * _Nonnull id;
/**
  The date this object was initially created.
*/
@property (nonatomic, copy) NSDate * _Nonnull createdAt;
/**
  The date this object was last modified.
*/
@property (nonatomic, copy) NSDate * _Nonnull updatedAt;
/**
  An error or informational message, typically written to by the Realm Object Server.
*/
@property (nonatomic, copy) NSString * _Nullable statusMessage;
/**
  Sync management object status.
*/
@property (nonatomic, readonly) RLMSyncManagementObjectStatus status;
/**
  The remote URL to the realm.
*/
@property (nonatomic, copy) NSString * _Nonnull realmUrl;
/**
  The identity of a user affected by this permission change.
*/
@property (nonatomic, copy) NSString * _Nonnull userId;
/**
  :nodoc:
*/
+ (BOOL)shouldIncludeInDefaultSchema;
/**
  :nodoc:
*/
+ (NSString * _Nullable)_realmObjectName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
