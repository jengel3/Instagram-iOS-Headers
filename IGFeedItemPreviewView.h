
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UILabel, IGImageView, IGFeedItemVideoView, CALayer;

@interface IGFeedItemPreviewView : UIView {

	char _isVideo;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _timestampLabel;
	float _aspectRatio;
	IGImageView* _imageView;
	IGFeedItemVideoView* _videoView;
	CALayer* _dividerLayer;

}

@property (nonatomic,retain) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                  //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (assign,nonatomic) float aspectRatio;                                         //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) char isVideo;                                              //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * videoView;                           //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) CALayer * dividerLayer;                                    //@synthesize dividerLayer=_dividerLayer - In the implementation block
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(void)playWithPlayer:(id)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(void)updateWithFeedItem:(id)arg1 ;
-(CALayer *)dividerLayer;
-(id)initWithFeedItem:(id)arg1 placeholderImage:(id)arg2 width:(float)arg3 ;
-(void)setDividerLayer:(CALayer *)arg1 ;
-(void)setVideoView:(IGFeedItemVideoView *)arg1 ;
-(float)aspectRatio;
-(void)setIsVideo:(char)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(IGImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(IGImageView *)arg1 ;
-(char)isVideo;
-(void)setAspectRatio:(float)arg1 ;
@end

