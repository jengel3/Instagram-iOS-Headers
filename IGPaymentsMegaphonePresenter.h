
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate;
@class IGGenericMegaphone;

@interface IGPaymentsMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	IGGenericMegaphone* _megaphone;
	id<IGMegaphonePresenterDelegate> _delegate;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,__weak,readonly) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)megaphoneForTesting;
-(IGGenericMegaphone *)megaphone;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 ;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

