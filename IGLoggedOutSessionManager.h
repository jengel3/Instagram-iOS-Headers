

@interface IGLoggedOutSessionManager : NSObject
+(id)loggedOutSessionData;
+(void)removeLoggedOutSessionData;
+(void)generateAndSaveLoggedOutSessionData;
-(void)configureLoggedOutSessionData;
-(void)dealloc;
-(id)init;
@end

