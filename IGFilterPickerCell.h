
#import <Instagram/IGToolPickerCell.h>

@class NSString, UILabel, UIView;

@interface IGFilterPickerCell : IGToolPickerCell {

	char _displayNewFilterNUX;
	NSString* _imageName;
	Class _filterClass;
	UILabel* _nuxNewLabel;
	UIView* _nuxOverlay;

}

@property (assign,nonatomic) char displayNewFilterNUX;              //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
@property (nonatomic,copy) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) Class filterClass;                     //@synthesize filterClass=_filterClass - In the implementation block
@property (nonatomic,retain) UILabel * nuxNewLabel;                 //@synthesize nuxNewLabel=_nuxNewLabel - In the implementation block
@property (nonatomic,retain) UIView * nuxOverlay;                   //@synthesize nuxOverlay=_nuxOverlay - In the implementation block
-(Class)filterClass;
-(void)setFilterClass:(Class)arg1 ;
-(void)setImageName:(id)arg1 filterClass:(Class)arg2 ;
-(void)setDisplayNewFilterNUX:(char)arg1 animated:(char)arg2 ;
-(void)setDisplayNewFilterNUX:(char)arg1 ;
-(UIView *)nuxOverlay;
-(UILabel *)nuxNewLabel;
-(char)displayNewFilterNUX;
-(void)setNuxNewLabel:(UILabel *)arg1 ;
-(void)setNuxOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

