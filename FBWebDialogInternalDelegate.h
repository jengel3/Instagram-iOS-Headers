
#import <Instagram/FBDialogDelegate.h>

@protocol FBWebDialogsDelegate;
@class FBDialog, NSString, NSDictionary, FBSession;

@interface FBWebDialogInternalDelegate : NSObject <FBDialogDelegate> {

	char _isSelfRetained;
	/*^block*/id _handler;
	FBDialog* _dialog;
	NSString* _dialogMethod;
	NSDictionary* _parameters;
	FBSession* _session;
	id<FBWebDialogsDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) FBDialog * dialog;                              //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSString * dialogMethod;                          //@synthesize dialogMethod=_dialogMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                        //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) FBSession * session;                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) id<FBWebDialogsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDialogMethod:(NSString *)arg1 ;
-(NSString *)dialogMethod;
-(void)completeWithResult:(unsigned)arg1 url:(id)arg2 error:(id)arg3 ;
-(void)releaseSelfIfNeeded;
-(void)dialogDidComplete:(id)arg1 ;
-(void)dialogCompleteWithUrl:(id)arg1 ;
-(void)dialogDidNotCompleteWithUrl:(id)arg1 ;
-(void)dialogDidNotComplete:(id)arg1 ;
-(void)dialog:(id)arg1 didFailWithError:(id)arg2 ;
-(char)dialog:(id)arg1 shouldOpenURLInExternalBrowser:(id)arg2 ;
-(void)goRetainYourself;
-(FBSession *)session;
-(void)setDelegate:(id<FBWebDialogsDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebDialogsDelegate>)delegate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
-(void)setDialog:(FBDialog *)arg1 ;
-(FBDialog *)dialog;
@end

