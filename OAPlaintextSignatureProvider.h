
#import <Instagram/OASignatureProviding.h>

@class NSString;

@interface OAPlaintextSignatureProvider : NSObject <OASignatureProviding>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)signClearText:(id)arg1 withSecret:(id)arg2 ;
-(id)name;
@end

