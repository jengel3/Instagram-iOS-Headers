
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate, IGGenericMegaphoneLogger;
@class IGGenericMegaphoneViewV2;

@interface IGChangePasswordMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	id<IGMegaphonePresenterDelegate> _delegate;
	IGGenericMegaphoneViewV2* _megaphoneView;
	id<IGGenericMegaphoneLogger> _logger;

}

@property (nonatomic,readonly) IGGenericMegaphoneViewV2 * megaphoneView;                    //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned)buttonActionFromString:(id)arg1 ;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(void)handlePasswordChanged:(id)arg1 ;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 logger:(id)arg3 ;
-(IGGenericMegaphoneViewV2 *)megaphoneView;
-(id<IGGenericMegaphoneLogger>)logger;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

