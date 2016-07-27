

@interface IGLoggedOutSessionManager : NSObject
+(void)removeLoggedOutSessionData;
+(void)generateAndSaveLoggedOutSessionData;
+(id)loggedOutSessionData;
-(void)configureLoggedOutSessionData;
-(void)dealloc;
-(id)init;
@end

