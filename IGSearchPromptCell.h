
#import <Instagram/IGGroupedTableViewCell.h>

@class UIImageView, UIActivityIndicatorView;

@interface IGSearchPromptCell : IGGroupedTableViewCell {

	UIImageView* _searchGlyph;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(void)setIsSearching:(char)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

