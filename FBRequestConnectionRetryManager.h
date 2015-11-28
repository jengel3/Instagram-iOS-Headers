

@protocol FBRequestConnectionRetryManagerDelegate;
@class FBRequestConnection, FBSession, NSString, NSMutableArray, FBRequestConnectionRetryManagerAlertViewHelper;

@interface FBRequestConnectionRetryManager : NSObject {

	FBRequestConnection*<FBRequestConnectionRetryManagerDelegate> _requestConnection;
	int _state;
	FBSession* _sessionToReconnect;
	NSString* _alertMessage;
	NSMutableArray* _requestMetadatas;
	FBRequestConnectionRetryManagerAlertViewHelper* _alertViewHelper;

}

@property (assign,nonatomic) FBRequestConnection*<FBRequestConnectionRetryManagerDelegate> requestConnection;              //@synthesize requestConnection=_requestConnection - In the implementation block
@property (assign,nonatomic) int state;                                                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBSession * sessionToReconnect;                                                               //@synthesize sessionToReconnect=_sessionToReconnect - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                                                        //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestMetadatas;                                                            //@synthesize requestMetadatas=_requestMetadatas - In the implementation block
@property (nonatomic,retain) FBRequestConnectionRetryManagerAlertViewHelper * alertViewHelper;                             //@synthesize alertViewHelper=_alertViewHelper - In the implementation block
-(id)initWithFBRequestConnection:(id)arg1 ;
-(void)performRetries;
-(void)setRequestConnection:(FBRequestConnection*<FBRequestConnectionRetryManagerDelegate>)arg1 ;
-(NSMutableArray *)requestMetadatas;
-(FBRequestConnectionRetryManagerAlertViewHelper *)alertViewHelper;
-(void)notifyConnectionWillRetryWithConnection:(id)arg1 ;
-(FBRequestConnection*<FBRequestConnectionRetryManagerDelegate>)requestConnection;
-(void)notifyConnectionDidFinishAbortingRetries;
-(FBSession *)sessionToReconnect;
-(void)repairSuccess;
-(void)repairFailed;
-(void)notifyConnectionDidFinishWithNoRetries;
-(void)addRequestMetadata:(id)arg1 ;
-(void)setSessionToReconnect:(FBSession *)arg1 ;
-(void)setRequestMetadatas:(NSMutableArray *)arg1 ;
-(void)setAlertViewHelper:(FBRequestConnectionRetryManagerAlertViewHelper *)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
@end

