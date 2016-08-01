
#import <Instagram/IGUserDetailCTAViewDelegate.h>
#import <Instagram/IGCTAPresenterProtocol.h>

@protocol IGCTAPresenterDelegate;
@class IGCTAPresenterContext, IGFeedDirectResponseHandler, NSString;

@interface IGUserDetailCTAPresenter : NSObject <IGUserDetailCTAViewDelegate, IGCTAPresenterProtocol> {

	IGCTAPresenterContext* _context;
	id<IGCTAPresenterDelegate> _delegate;
	IGFeedDirectResponseHandler* _directResponseHandler;

}

@property (nonatomic,readonly) IGCTAPresenterContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<IGCTAPresenterDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedDirectResponseHandler * directResponseHandler;              //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldPresentCTAForLifeCycleTime:(int)arg1 ;
-(IGFeedDirectResponseHandler *)directResponseHandler;
-(void)setDirectResponseHandler:(IGFeedDirectResponseHandler *)arg1 ;
-(void)handleCTATap;
-(id)viewForCTA;
-(id)initWithContext:(id)arg1 analyticsModule:(id)arg2 delegate:(id)arg3 ;
-(void)ctaViewDidTapDismiss:(id)arg1 ;
-(void)ctaButtonTap:(id)arg1 ;
-(id<IGCTAPresenterDelegate>)delegate;
-(IGCTAPresenterContext *)context;
@end

