
@class NSString;


@protocol FBSessionLoginStrategy <NSObject>
@property (copy,readonly) NSString * methodName; 
@required
-(NSString *)methodName;
-(char)tryPerformAuthorizeWithParams:(id)arg1 session:(id)arg2 logger:(id)arg3;

@end

