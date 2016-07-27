
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGTapButton, UIImageView, UILabel;

@interface IGAlbumViewersHeaderView : UIView {

	int _viewerCount;
	IGTapButton* _deleteButton;
	IGTapButton* _shareButton;
	UIImageView* _viewersIconImageView;
	UILabel* _viewersLabel;

}

@property (nonatomic,readonly) UIImageView * viewersIconImageView;              //@synthesize viewersIconImageView=_viewersIconImageView - In the implementation block
@property (nonatomic,readonly) UILabel * viewersLabel;                          //@synthesize viewersLabel=_viewersLabel - In the implementation block
@property (assign,nonatomic) int viewerCount;                                   //@synthesize viewerCount=_viewerCount - In the implementation block
@property (nonatomic,readonly) IGTapButton * deleteButton;                      //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * shareButton;                       //@synthesize shareButton=_shareButton - In the implementation block
-(int)viewerCount;
-(void)setViewerCount:(int)arg1 ;
-(UILabel *)viewersLabel;
-(UIImageView *)viewersIconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGTapButton *)deleteButton;
-(IGTapButton *)shareButton;
@end

