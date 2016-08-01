
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate, IGGenericMegaphoneLogger;
@class IGGenericMegaphoneViewV2, IGUser;

@interface IGReportUserSpamMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	id<IGMegaphonePresenterDelegate> _delegate;
	IGGenericMegaphoneViewV2* _megaphoneView;
	IGUser* _user;
	id<IGGenericMegaphoneLogger> _logger;

}

@property (nonatomic,readonly) IGGenericMegaphoneViewV2 * megaphoneView;                    //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned)buttonActionFromString:(id)arg1 ;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(id)initWithMegaphone:(id)arg1 user:(id)arg2 delegate:(id)arg3 logger:(id)arg4 ;
-(IGGenericMegaphoneViewV2 *)megaphoneView;
-(id<IGGenericMegaphoneLogger>)logger;
-(IGUser *)user;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

