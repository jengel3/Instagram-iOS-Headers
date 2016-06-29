
#import <UIKit/UITableViewCell.h>

@class UIView;

@interface IGBrandLiftResultsViewAnswerCell : UITableViewCell {

	float _value;
	UIView* _grayBar;
	UIView* _blueBar;

}

@property (nonatomic,retain) UIView * grayBar;              //@synthesize grayBar=_grayBar - In the implementation block
@property (nonatomic,retain) UIView * blueBar;              //@synthesize blueBar=_blueBar - In the implementation block
@property (assign,nonatomic) float value;                   //@synthesize value=_value - In the implementation block
-(UIView *)grayBar;
-(UIView *)blueBar;
-(void)setGrayBar:(UIView *)arg1 ;
-(void)setBlueBar:(UIView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)value;
-(void)setValue:(float)arg1 ;
@end

