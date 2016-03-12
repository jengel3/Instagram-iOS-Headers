
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGStraightenGridView : UIView {

	UIImageView* _imageView;

}

@property (assign,getter=isGridHidden,nonatomic) char gridHidden; 
-(void)setGridHidden:(char)arg1 ;
-(char)isGridHidden;
-(void)flashGrid;
-(void)layoutSubviews;
@end

