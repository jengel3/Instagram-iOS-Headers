
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate;
@class IGGenericMegaphone, IGDefaultGenericMegaphoneLogger;

@interface IGHONMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	char _megaphoneSeen;
	IGGenericMegaphone* _megaphone;
	id<IGMegaphonePresenterDelegate> _delegate;
	IGDefaultGenericMegaphoneLogger* _logger;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,__weak,readonly) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGDefaultGenericMegaphoneLogger * logger;                      //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                              //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
-(IGGenericMegaphone *)megaphone;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 displaySource:(unsigned)arg3 ;
-(IGDefaultGenericMegaphoneLogger *)logger;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

