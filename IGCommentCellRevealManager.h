
#import <Instagram/IGCommentCellDelegate.h>

@class IGCommentCell, NSString;

@interface IGCommentCellRevealManager : NSObject <IGCommentCellDelegate> {

	IGCommentCell* _openCell;

}

@property (nonatomic,retain) IGCommentCell * openCell;              //@synthesize openCell=_openCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCompleteActionForCommentCell:(id)arg1 ;
-(void)didShowActionsForCommentCell:(id)arg1 ;
-(void)didHideActionsForCommentCell:(id)arg1 ;
-(IGCommentCell *)openCell;
-(void)setOpenCell:(IGCommentCell *)arg1 ;
-(void)reset;
@end

