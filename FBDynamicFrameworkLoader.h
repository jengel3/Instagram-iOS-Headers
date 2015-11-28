

#import <Instagram/Instagram-Structs.h>
@interface FBDynamicFrameworkLoader : NSObject
+(void*)loadSymbol:(id)arg1 withFramework:(id)arg2 ;
+(Class)loadClass:(id)arg1 withFramework:(id)arg2 ;
+(id)loadStringConstant:(id)arg1 withFramework:(id)arg2 ;
+(SecRandomRef)loadkSecRandomDefault;
+(id)frameworkPathTemplate;
+(void)setFrameworkPathTemplate:(id)arg1 ;
+(id)sqlitePath;
+(void)setSqlitePath:(id)arg1 ;
@end

