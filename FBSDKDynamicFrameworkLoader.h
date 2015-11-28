

#import <Instagram/Instagram-Structs.h>
@interface FBSDKDynamicFrameworkLoader : NSObject
+(SecRandomRef)loadkSecRandomDefault;
+(void*)loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
+(void*)loadkSecValueData;
+(void*)loadkSecAttrAccessible;
+(void*)loadkSecReturnData;
+(void*)loadkSecMatchLimitOne;
+(void*)loadkSecMatchLimit;
+(void*)loadkSecClassGenericPassword;
+(void*)loadkSecClass;
+(void*)loadkSecAttrService;
+(void*)loadkSecAttrAccount;
+(void*)loadkSecAttrAccessGroup;
+(void*)loadkSecAttrGeneric;
-(id)init;
@end

