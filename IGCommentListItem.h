
#import <Instagram/IGDKDiffable.h>

@class NSString, IGCommentModel;

@interface IGCommentListItem : NSObject <IGDKDiffable> {

	NSString* _diffIdentifier;
	char _isLastCommentInSection;
	IGCommentModel* _commentModel;
	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) IGCommentModel * commentModel;              //@synthesize commentModel=_commentModel - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;               //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) char isLastCommentInSection;                //@synthesize isLastCommentInSection=_isLastCommentInSection - In the implementation block
-(id)diffIdentifier;
-(IGCommentModel *)commentModel;
-(char)isLastCommentInSection;
-(id)initWithCommentModel:(id)arg1 sectionIdentifier:(id)arg2 isLastCommentInSection:(char)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)sectionIdentifier;
@end

