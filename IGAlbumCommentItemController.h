
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAlbumCommentContentViewDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumCommentItemDelegate;
@class IGCommentModel, NSString;

@interface IGAlbumCommentItemController : IGListItemController <IGAlbumCommentContentViewDelegate, IGListItemType> {

	id<IGAlbumCommentItemDelegate> _delegate;
	IGCommentModel* _comment;

}

@property (nonatomic,readonly) IGCommentModel * comment;                                  //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCommentItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateToItem:(id)arg1 ;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)contentView:(id)arg1 didTapUser:(id)arg2 ;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2 ;
-(void)setDelegate:(id<IGAlbumCommentItemDelegate>)arg1 ;
-(id<IGAlbumCommentItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGCommentModel *)comment;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

