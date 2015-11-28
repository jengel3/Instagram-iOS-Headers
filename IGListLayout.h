
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayout.h>

@protocol IGListLayoutDelegate;
@class UICollectionViewLayoutAttributes;

@interface IGListLayout : IGCollectionViewLayout {

	int _numberOfItems;
	vector<float, std::__1::allocator<float> >* _itemHeights;
	vector<float, std::__1::allocator<float> >* _itemOffsets;
	map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >* _itemHeaders;
	map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >* _itemFooters;
	UICollectionViewLayoutAttributes* _headerAttribute;
	id<IGListLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGListLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(float)defaultHeaderHeight;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setFooterHeight:(float)arg1 atIndexPath:(id)arg2 ;
-(void)setItemHeight:(float)arg1 atIndexPath:(id)arg2 ;
-(void)calculateLayoutInfoWithObjects:(id)arg1 context:(id)arg2 viewWidth:(float)arg3 supplementaryHeaderViewHeight:(float)arg4 itemHeights:(vector<float, std::__1::allocator<float> >*)arg5 itemOffsets:(vector<float, std::__1::allocator<float> >*)arg6 itemHeaders:(map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >*)arg7 itemFooters:(map<unsigned int, float, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, float> > >*)arg8 ;
-(float)headerHeightForIndex:(unsigned)arg1 ;
-(float)footerHeightForIndex:(unsigned)arg1 ;
-(void)setDelegate:(id<IGListLayoutDelegate>)arg1 ;
-(id<IGListLayoutDelegate>)delegate;
-(int)numberOfItemsInSection:(int)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
@end

