

#import <Instagram/Instagram-Structs.h>
@interface FBSDKDynamicFrameworkLoader : NSObject
+(void*)loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
+(SecRandomRef)loadkSecRandomDefault;
+(void*)loadkSecAttrAccessible;
+(void*)loadkSecAttrAccount;
+(void*)loadkSecValueData;
+(void*)loadkSecMatchLimitOne;
+(void*)loadkSecMatchLimit;
+(void*)loadkSecReturnData;
+(void*)loadkSecClass;
+(void*)loadkSecClassGenericPassword;
+(void*)loadkSecAttrService;
+(void*)loadkSecAttrGeneric;
+(void*)loadkSecAttrAccessGroup;
-(id)init;
@end

