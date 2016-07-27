

@class IGDirectContent, UICollectionView, IGUser;

@interface IGDirectThreadCellFactory : NSObject {

	char _threadIsPending;
	IGDirectContent* _mediaMessageToHide;
	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                      //@synthesize cellViewer=_cellViewer - In the implementation block
@property (assign,nonatomic,__weak) IGDirectContent * mediaMessageToHide;              //@synthesize mediaMessageToHide=_mediaMessageToHide - In the implementation block
@property (assign,nonatomic) char threadIsPending;                                     //@synthesize threadIsPending=_threadIsPending - In the implementation block
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(char)threadIsPending;
-(IGDirectContent *)mediaMessageToHide;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 ;
-(void)setThreadIsPending:(char)arg1 ;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 expanded:(char)arg4 thread:(id)arg5 ;
-(void)setMediaMessageToHide:(IGDirectContent *)arg1 ;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

