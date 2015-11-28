
#import <Instagram/FBSessionLoginStrategy.h>

@class NSString;

@interface FBSessionAppSwitchingLoginStategy : NSObject <FBSessionLoginStrategy> {

	NSString* _methodName;

}

@property (copy) NSString * methodName;                             //@synthesize methodName=_methodName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)methodName;
-(void)setMethodName:(NSString *)arg1 ;
-(char)tryPerformAuthorizeWithParams:(id)arg1 session:(id)arg2 logger:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

