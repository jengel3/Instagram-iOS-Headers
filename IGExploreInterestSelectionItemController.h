
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGExploreInterestSelectionCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGExploreInterestSelectionItemControllerDelegate;
@class IGExploreInterestModel, NSString;

@interface IGExploreInterestSelectionItemController : IGListItemController <IGExploreInterestSelectionCellDelegate, IGListItemType> {

	char _isFetching;
	char _isSavingSelection;
	id<IGExploreInterestSelectionItemControllerDelegate> _delegate;
	IGExploreInterestModel* _model;

}

@property (assign,nonatomic) char isFetching;                                                                   //@synthesize isFetching=_isFetching - In the implementation block
@property (assign,nonatomic) char isSavingSelection;                                                            //@synthesize isSavingSelection=_isSavingSelection - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreInterestSelectionItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGExploreInterestModel * model;                                                  //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)fetchMoreTopics;
-(void)saveSelectedTopics;
-(char)isSavingSelection;
-(void)setIsSavingSelection:(char)arg1 ;
-(void)exploreInterestSelectionCell:(id)arg1 didTapTopicsButton:(id)arg2 withIndex:(int)arg3 ;
-(void)exploreInterestSelectionCellDidTapSeeMore:(id)arg1 ;
-(void)exploreInterestSelectionCellDidTapDone:(id)arg1 ;
-(void)setDelegate:(id<IGExploreInterestSelectionItemControllerDelegate>)arg1 ;
-(id<IGExploreInterestSelectionItemControllerDelegate>)delegate;
-(IGExploreInterestModel *)model;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

