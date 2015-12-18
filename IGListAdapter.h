
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGNavigationContext, IGPresentationContext, IGListAdapterDelegate, UICollectionViewDelegate, IGListAdapterDataSource, IGListUpdatingDelegate;
@class UICollectionView, IGListObjectMap, IGListDisplayHandler, IGListAdapterProxy, NSString;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;
	id<IGListAdapterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	id<IGListAdapterDataSource> _dataSource;
	id<IGListUpdatingDelegate> _updatingDelegate;
	IGListObjectMap* _objectMap;
	IGListDisplayHandler* _displayHandler;
	IGListAdapterProxy* _delegateProxy;

}

@property (assign,nonatomic,__weak) id<IGNavigationContext> navigationContext;                        //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGPresentationContext> presentationContext;                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGListAdapterDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<IGListUpdatingDelegate> updatingDelegate;                           //@synthesize updatingDelegate=_updatingDelegate - In the implementation block
@property (nonatomic,readonly) IGListObjectMap * objectMap;                                           //@synthesize objectMap=_objectMap - In the implementation block
@property (nonatomic,readonly) IGListDisplayHandler * displayHandler;                                 //@synthesize displayHandler=_displayHandler - In the implementation block
@property (nonatomic,retain) IGListAdapterProxy * delegateProxy;                                      //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dequeReusableCellClass:(Class)arg1 forIndexPath:(id)arg2 ;
-(void)performUpdatesWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadListItemController:(id)arg1 forItemsAtIndexes:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(id)listItemControllerForObject:(id)arg1 ;
-(void)setNavigationContext:(id<IGNavigationContext>)arg1 ;
-(id<IGNavigationContext>)navigationContext;
-(id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 updatingDelegate:(id)arg3 ;
-(IGListObjectMap *)objectMap;
-(id<IGListUpdatingDelegate>)updatingDelegate;
-(id)indexPathsFromListItemController:(id)arg1 indexes:(id)arg2 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(void)checkAndRegisterListItemController:(id)arg1 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(IGListDisplayHandler *)displayHandler;
-(void)reloadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)insertListItemController:(id)arg1 forItemsAtIndexes:(id)arg2 ;
-(void)deleteListItemController:(id)arg1 forItemsAtIndexes:(id)arg2 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 class:(Class)arg2 forIndexPath:(id)arg3 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id<IGPresentationContext>)presentationContext;
-(void)setPresentationContext:(id<IGPresentationContext>)arg1 ;
-(id)cellIdentifierForClass:(Class)arg1 ;
-(IGListAdapterProxy *)delegateProxy;
-(void)setDelegate:(id<IGListAdapterDelegate>)arg1 ;
-(void)dealloc;
-(id<IGListAdapterDataSource>)dataSource;
-(id<IGListAdapterDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionView;
-(void)updateObjects:(id)arg1 ;
-(void)setDelegateProxy:(IGListAdapterProxy *)arg1 ;
@end

