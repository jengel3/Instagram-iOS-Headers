

#import <Instagram/Instagram-Structs.h>
@interface FBSDKDynamicFrameworkLoader : NSObject
+(void*)loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
+(SecRandomRef)loadkSecRandomDefault;
+(void*)loadkSecClass;
+(void*)loadkSecClassGenericPassword;
+(void*)loadkSecAttrService;
+(void*)loadkSecAttrGeneric;
+(void*)loadkSecAttrAccessGroup;
+(void*)loadkSecAttrAccessible;
+(void*)loadkSecAttrAccount;
+(void*)loadkSecValueData;
+(void*)loadkSecMatchLimitOne;
+(void*)loadkSecMatchLimit;
+(void*)loadkSecReturnData;
-(id)init;
@end

