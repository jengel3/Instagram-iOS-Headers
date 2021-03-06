
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, UIPageControl, IGInsightsParagraphComponent, UIView, IGInsightsLoggingHelper, IGInsightsHeaderView, NSString;

@interface IGInsightsCenteredParagraphPageView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UIPageControl* _pageControl;
	IGInsightsParagraphComponent* _paragraphComponent;
	int _currentLayoutIndex;
	UIView* _bottomSeparator;
	IGInsightsLoggingHelper* _loggingHelper;
	unsigned _surface;
	IGInsightsHeaderView* _headerView;
	CGSize _unitSize;

}

@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                    //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) IGInsightsParagraphComponent * paragraphComponent;              //@synthesize paragraphComponent=_paragraphComponent - In the implementation block
@property (assign,nonatomic) int currentLayoutIndex;                                         //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic) CGSize unitSize;                                                //@synthesize unitSize=_unitSize - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (assign,nonatomic) unsigned surface;                                               //@synthesize surface=_surface - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderView * headerView;                              //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(id)initWithParagraphComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(void)setSurface:(unsigned)arg1 ;
-(id)getCollectionViewFlowLayout;
-(void)initializePageControl;
-(void)logPageDisplayedAtIndex:(unsigned)arg1 ;
-(void)pageControlValueChanged:(id)arg1 ;
-(void)setUnitSize:(CGSize)arg1 ;
-(void)setCurrentLayoutIndex:(int)arg1 ;
-(int)currentLayoutIndex;
-(IGInsightsParagraphComponent *)paragraphComponent;
-(CGSize)unitSize;
-(void)setParagraphComponent:(IGInsightsParagraphComponent *)arg1 ;
-(void)updateWidth:(float)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIPageControl *)pageControl;
-(unsigned)surface;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end

