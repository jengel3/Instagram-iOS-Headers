
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@protocol IGEventViewerUsernameBadgeDelegate;
@class IGEventViewerUsernameBadge, UIProgressView, IGBlurredImageView, NSString;

@interface IGEventViewerVideoCell : IGFeedItemVideoCell <IGEventViewerCellType> {

	IGEventViewerUsernameBadge* _usernameBadge;
	UIProgressView* _progressView;
	IGBlurredImageView* _blurredImageView;
	id<IGEventViewerUsernameBadgeDelegate> _badgeDelegate;

}

@property (nonatomic,readonly) IGEventViewerUsernameBadge * usernameBadge;                             //@synthesize usernameBadge=_usernameBadge - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                                          //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                                  //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerUsernameBadgeDelegate> badgeDelegate;              //@synthesize badgeDelegate=_badgeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(IGEventViewerUsernameBadge *)usernameBadge;
-(void)setShadowHidden:(char)arg1 ;
-(void)didTapUsernameBadge:(id)arg1 ;
-(id<IGEventViewerUsernameBadgeDelegate>)badgeDelegate;
-(void)setBadgeDelegate:(id<IGEventViewerUsernameBadgeDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIProgressView *)progressView;
@end

