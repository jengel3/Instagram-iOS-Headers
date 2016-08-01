
#import <Instagram/IGDKDiffable.h>

@class NSString, IGCommentModel;

@interface IGCommentListItem : NSObject <IGDKDiffable> {

	NSString* _diffIdentifier;
	char _isLastCommentInSection;
	IGCommentModel* _commentModel;
	NSString* _feedItemPK;
	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) IGCommentModel * commentModel;              //@synthesize commentModel=_commentModel - In the implementation block
@property (nonatomic,readonly) NSString * feedItemPK;                      //@synthesize feedItemPK=_feedItemPK - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;               //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) char isLastCommentInSection;                //@synthesize isLastCommentInSection=_isLastCommentInSection - In the implementation block
-(id)diffIdentifier;
-(IGCommentModel *)commentModel;
-(char)isLastCommentInSection;
-(NSString *)feedItemPK;
-(id)initWithCommentModel:(id)arg1 feedItemPK:(id)arg2 sectionIdentifier:(id)arg3 isLastCommentInSection:(char)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)sectionIdentifier;
@end

