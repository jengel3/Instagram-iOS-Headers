

@class IGCommentModel;

@interface IGFeedItemRowItem : NSObject {

	int _type;
	IGCommentModel* _comment;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;              //@synthesize comment=_comment - In the implementation block
+(id)rowItemOfType:(int)arg1 withComment:(id)arg2 ;
-(void)setComment:(IGCommentModel *)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(IGCommentModel *)comment;
@end

