
#import <Instagram/IGToolPickerCell.h>

@class UILabel, UIView;

@interface IGFilterPickerCell : IGToolPickerCell {

	char _displayNewFilterNUX;
	UILabel* _nuxNewLabel;
	UIView* _nuxOverlay;

}

@property (assign,nonatomic) char displayNewFilterNUX;              //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
@property (nonatomic,retain) UILabel * nuxNewLabel;                 //@synthesize nuxNewLabel=_nuxNewLabel - In the implementation block
@property (nonatomic,retain) UIView * nuxOverlay;                   //@synthesize nuxOverlay=_nuxOverlay - In the implementation block
-(void)setDisplayNewFilterNUX:(char)arg1 animated:(char)arg2 ;
-(void)setDisplayNewFilterNUX:(char)arg1 ;
-(UIView *)nuxOverlay;
-(UILabel *)nuxNewLabel;
-(char)displayNewFilterNUX;
-(void)setNuxNewLabel:(UILabel *)arg1 ;
-(void)setNuxOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

