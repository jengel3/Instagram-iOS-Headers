
#import <Instagram/IGToolPickerCell.h>
#import <Instagram/IGPickerNuxCellType.h>

@class UILabel, UIView, NSString;

@interface IGFilterPickerCell : IGToolPickerCell <IGPickerNuxCellType> {

	char _displayNewFilterNUX;
	UILabel* _nuxNewLabel;
	UIView* _nuxOverlay;

}

@property (nonatomic,retain) UILabel * nuxNewLabel;                 //@synthesize nuxNewLabel=_nuxNewLabel - In the implementation block
@property (nonatomic,retain) UIView * nuxOverlay;                   //@synthesize nuxOverlay=_nuxOverlay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char displayNewFilterNUX;              //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
-(void)setDisplayNewFilterNUX:(char)arg1 animated:(char)arg2 ;
-(UIView *)nuxOverlay;
-(UILabel *)nuxNewLabel;
-(char)displayNewFilterNUX;
-(void)setDisplayNewFilterNUX:(char)arg1 ;
-(void)setNuxNewLabel:(UILabel *)arg1 ;
-(void)setNuxOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

