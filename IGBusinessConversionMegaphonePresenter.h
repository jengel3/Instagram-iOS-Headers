
#import <Instagram/IGBusinessConversionViewControllerDelegate.h>
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate;
@class IGGenericMegaphone, NSString;

@interface IGBusinessConversionMegaphonePresenter : NSObject <IGBusinessConversionViewControllerDelegate, IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	IGGenericMegaphone* _megaphone;
	id<IGMegaphonePresenterDelegate> _delegate;

}

@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)megaphoneForTesting;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(id)viewForMegaphone;
-(void)businessConversionViewControllerDidDismiss:(id)arg1 ;
-(void)businessConversionViewControllerDidCompleteFlow:(id)arg1 ;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

