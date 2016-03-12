
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableArray, UIScrollView, NSString;

@interface IGAlbumPageIndicator : UIView <UIScrollViewDelegate> {

	int _numPages;
	int _currentPage;
	NSMutableArray* _dots;
	UIScrollView* _scrollView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createDotsIfNeeded;
-(void)setCurrentPage:(int)arg1 animated:(char)arg2 ;
-(void)scaleDots;
-(float)targetOffsetForPage:(int)arg1 ;
-(void)configureWithNumberOfPages:(int)arg1 currentPage:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCurrentPage:(int)arg1 ;
@end

