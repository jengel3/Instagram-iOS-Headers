
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFeaturedUserInfo, NSString;

@interface IGPersonListItem : IGListItemController <IGExploreCellDelegate, IGListItemType> {

	IGFeaturedUserInfo* _featuredUserInfo;

}

@property (nonatomic,retain) IGFeaturedUserInfo * featuredUserInfo;              //@synthesize featuredUserInfo=_featuredUserInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(unsigned)numberOfItemsInListAdapter:(id)arg1 ;
-(CGSize)listAdapter:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(id)listAdapter:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)listAdapter:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(IGFeaturedUserInfo *)featuredUserInfo;
-(id)exploreViewModelInWidth:(float)arg1 ;
-(void)setFeaturedUserInfo:(IGFeaturedUserInfo *)arg1 ;
@end

