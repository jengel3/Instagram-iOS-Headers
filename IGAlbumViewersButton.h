
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@class UIImageView, UILabel;

@interface IGAlbumViewersButton : IGTapButton {

	int _viewerCount;
	UIImageView* _swipeUpImageView;
	UIImageView* _eyeImageView;
	UILabel* _label;

}

@property (nonatomic,readonly) UIImageView * swipeUpImageView;              //@synthesize swipeUpImageView=_swipeUpImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * eyeImageView;                  //@synthesize eyeImageView=_eyeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int viewerCount;                               //@synthesize viewerCount=_viewerCount - In the implementation block
-(int)viewerCount;
-(UIImageView *)eyeImageView;
-(void)setViewerCount:(int)arg1 ;
-(UIImageView *)swipeUpImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
-(void)updateLabelText;
@end

