
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>

@protocol IGCommentContentViewDelegate;
@class IGCommentModel, IGProfilePictureImageView, IGCoreTextView, UIButton, UIImageView, UIActivityIndicatorView, NSString;

@interface IGCommentContentView : UIView <IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate> {

	char _canShowRetryButton;
	char _canShowVerifiedBadge;
	char _leftLocalization;
	char _enableCommentLikes;
	IGCommentModel* _comment;
	id<IGCommentContentViewDelegate> _delegate;
	IGProfilePictureImageView* _profilePic;
	IGCoreTextView* _coreTextView;
	UIButton* _retryButton;
	UIImageView* _statusView;
	UIActivityIndicatorView* _activityIndicator;
	IGCoreTextView* _metadataTextView;

}

@property (nonatomic,retain) UIButton * retryButton;                                        //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIImageView * statusView;                                      //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                        //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGCoreTextView * metadataTextView;                             //@synthesize metadataTextView=_metadataTextView - In the implementation block
@property (assign,nonatomic) char leftLocalization;                                         //@synthesize leftLocalization=_leftLocalization - In the implementation block
@property (assign,nonatomic) char enableCommentLikes;                                       //@synthesize enableCommentLikes=_enableCommentLikes - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCoreTextView * coreTextView;                                 //@synthesize coreTextView=_coreTextView - In the implementation block
@property (assign,nonatomic) char canShowRetryButton;                                       //@synthesize canShowRetryButton=_canShowRetryButton - In the implementation block
@property (assign,nonatomic) char canShowVerifiedBadge;                                     //@synthesize canShowVerifiedBadge=_canShowVerifiedBadge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)commentWidthForWidth:(float)arg1 enableCommentLikes:(char)arg2 ;
+(float)metadataTextViewHeight;
+(float)metaDataTextSize;
+(float)profilePictureColumnWidthForEnabledCommentLikes:(char)arg1 ;
+(float)heightForComment:(id)arg1 width:(float)arg2 enableCommentLikes:(char)arg3 ;
-(UIButton *)retryButton;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)retryTapped;
-(void)layoutRetryButton;
-(void)layoutCommentCoreTextView;
-(void)layoutMetadata;
-(void)layoutActivityIndicator;
-(IGCoreTextView *)metadataTextView;
-(void)setMetadataTextView:(IGCoreTextView *)arg1 ;
-(char)leftLocalization;
-(void)setLeftLocalization:(char)arg1 ;
-(char)canShowVerifiedBadge;
-(void)setCanShowVerifiedBadge:(char)arg1 ;
-(char)canShowRetryButton;
-(void)setCanShowRetryButton:(char)arg1 ;
-(void)setEnableCommentLikes:(char)arg1 ;
-(char)enableCommentLikes;
-(void)layoutProfilePic;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(void)setRetryButton:(UIButton *)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)setComment:(IGCommentModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGCommentContentViewDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIImageView *)statusView;
-(void)setStatusView:(UIImageView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)updateStatus;
-(IGCommentModel *)comment;
@end

