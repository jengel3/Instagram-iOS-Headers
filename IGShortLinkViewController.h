
#import <Instagram/IGViewController.h>

@class NSURL, IGTableViewInsetInfoView;

@interface IGShortLinkViewController : IGViewController {

	int _linkTarget;
	NSURL* _shortLinkURL;
	IGTableViewInsetInfoView* _infoView;

}

@property (assign,nonatomic) int linkTarget;                                   //@synthesize linkTarget=_linkTarget - In the implementation block
@property (nonatomic,retain) NSURL * shortLinkURL;                             //@synthesize shortLinkURL=_shortLinkURL - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
-(id)initWithShortLinkURL:(id)arg1 linkTarget:(int)arg2 ;
-(void)setShortLinkURL:(NSURL *)arg1 ;
-(void)infoViewDidTap;
-(NSURL *)shortLinkURL;
-(void)fetchShortLinkURL:(id)arg1 ;
-(void)handleFetchFailureWithError:(id)arg1 ;
-(void)handleFetchSuccessWithMediaViewable:(id)arg1 userID:(id)arg2 username:(id)arg3 mediaID:(id)arg4 ;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)viewDidLoad;
-(int)linkTarget;
-(void)setLinkTarget:(int)arg1 ;
@end

