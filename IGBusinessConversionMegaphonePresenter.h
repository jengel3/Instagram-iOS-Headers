
#import <Instagram/IGBusinessConversionViewControllerDelegate.h>
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGBusinessConversionMegaphonePresenterDelegate, IGGenericMegaphoneLogger, IGMegaphonePresenterDelegate;
@class IGGenericMegaphone, NSString;

@interface IGBusinessConversionMegaphonePresenter : NSObject <IGBusinessConversionViewControllerDelegate, IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	id<IGBusinessConversionMegaphonePresenterDelegate> _presenterDelegate;
	IGGenericMegaphone* _megaphone;
	id<IGGenericMegaphoneLogger> _logger;
	id<IGMegaphonePresenterDelegate> _delegate;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                                         //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                                                    //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) id<IGMegaphonePresenterDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionMegaphonePresenterDelegate> presenterDelegate;              //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)megaphoneForTesting;
-(IGGenericMegaphone *)megaphone;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(void)showConvertLaterAlert;
-(id<IGBusinessConversionMegaphonePresenterDelegate>)presenterDelegate;
-(void)businessConversionViewControllerDidDismiss:(id)arg1 ;
-(void)businessConversionViewControllerDidCompleteFlow:(id)arg1 ;
-(void)setPresenterDelegate:(id<IGBusinessConversionMegaphonePresenterDelegate>)arg1 ;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 logger:(id)arg3 ;
-(id<IGGenericMegaphoneLogger>)logger;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

