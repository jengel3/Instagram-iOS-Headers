
#import <Instagram/FBSessionLoginStrategy.h>

@class NSString;

@interface FBSessionSafariLoginStategy : NSObject <FBSessionLoginStrategy>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * methodName; 
-(NSString *)methodName;
-(char)tryPerformAuthorizeWithParams:(id)arg1 session:(id)arg2 logger:(id)arg3 ;
@end

