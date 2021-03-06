
#import <Instagram/IGCollectionViewCell.h>

@class IGShareService, IGKVOHandle;

@interface IGShareServiceCell : IGCollectionViewCell {

	IGShareService* _shareService;
	IGKVOHandle* _shareServiceObserver;

}

@property (nonatomic,retain) IGKVOHandle * shareServiceObserver;              //@synthesize shareServiceObserver=_shareServiceObserver - In the implementation block
@property (nonatomic,retain) IGShareService * shareService;                   //@synthesize shareService=_shareService - In the implementation block
-(void)setShareService:(IGShareService *)arg1 ;
-(IGKVOHandle *)shareServiceObserver;
-(void)setShareServiceObserver:(IGKVOHandle *)arg1 ;
-(IGShareService *)shareService;
-(void)updateShareState;
-(void)dealloc;
@end

