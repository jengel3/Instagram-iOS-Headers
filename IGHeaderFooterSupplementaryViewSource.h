
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListSupplementaryViewSource.h>

@class IGLabelSupplementaryViewSource, IGSeparatorSupplementaryViewSource, NSString;

@interface IGHeaderFooterSupplementaryViewSource : NSObject <IGListSupplementaryViewSource> {

	char _hideHeader;
	char _hideFooter;
	IGLabelSupplementaryViewSource* _header;
	IGSeparatorSupplementaryViewSource* _footer;

}

@property (nonatomic,readonly) IGLabelSupplementaryViewSource * header;                  //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) IGSeparatorSupplementaryViewSource * footer;              //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) char hideHeader;                                            //@synthesize hideHeader=_hideHeader - In the implementation block
@property (assign,nonatomic) char hideFooter;                                            //@synthesize hideFooter=_hideFooter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHideHeader:(char)arg1 ;
-(void)setHideFooter:(char)arg1 ;
-(id)initWithListItemController:(id)arg1 collectionContext:(id)arg2 ;
-(id)supportedElementKinds;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithHeaderViewSource:(id)arg1 footerViewSource:(id)arg2 ;
-(char)hideHeader;
-(char)hideFooter;
-(IGLabelSupplementaryViewSource *)header;
-(IGSeparatorSupplementaryViewSource *)footer;
@end

