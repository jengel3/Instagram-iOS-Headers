
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGRearrangeOverlayView : UIView {

	int _type;
	UILabel* _removeLabel;
	UIImageView* _removeImageView;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UILabel * removeLabel;                      //@synthesize removeLabel=_removeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * removeImageView;              //@synthesize removeImageView=_removeImageView - In the implementation block
-(void)updateRemoveText;
-(UIImageView *)removeImageView;
-(UILabel *)removeLabel;
-(void)setRemoveLabel:(UILabel *)arg1 ;
-(void)setRemoveImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setType:(int)arg1 ;
-(int)type;
@end

