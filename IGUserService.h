
#import <Instagram/IGService.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString;

@interface IGUserService : IGService <IGUserSessionClearableObject>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)cancelAllPendingRequests;
@end

