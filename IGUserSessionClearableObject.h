

@protocol IGUserSessionClearableObject <NSObject>
@required
+(void)clearForUserPK:(id)arg1;
-(void)willSwitchUsers;
-(void)willLogOut;

@end

