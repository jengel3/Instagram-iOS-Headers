
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGListAdapterDataSource.h>

@class IGListCollectionView, IGListAdapter, IGAlbumSubscriptionTrayModel, UIView, NSString;

@interface IGAlbumSubscriptionTrayCollectionCell : UICollectionViewCell <IGListAdapterDataSource> {

	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGAlbumSubscriptionTrayModel* _model;
	UIView* _bottomBorderView;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                          //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) IGAlbumSubscriptionTrayModel * model;                 //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIView * bottomBorderView;                            //@synthesize bottomBorderView=_bottomBorderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)traySortDescriptors;
+(float)height;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setBottomBorderView:(UIView *)arg1 ;
-(UIView *)bottomBorderView;
-(void)albumSeenStateUpdated;
-(void)currentAlbumUpdated;
-(void)configureWithModel:(id)arg1 navigationContext:(id)arg2 presentationContext:(id)arg3 ;
-(IGListAdapter *)listAdapter;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(IGListCollectionView *)collectionView;
-(IGAlbumSubscriptionTrayModel *)model;
-(void)setModel:(IGAlbumSubscriptionTrayModel *)arg1 ;
@end

