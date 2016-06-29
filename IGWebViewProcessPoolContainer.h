
#import <Instagram/FBWebViewProcessPoolContaining.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString;

@interface IGWebViewProcessPoolContainer : NSObject <FBWebViewProcessPoolContaining, IGUserSessionClearableObject> {

	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) id invalidationHandler;                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)registerHandlerToBeCalledOnSessionInvalidation:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end

