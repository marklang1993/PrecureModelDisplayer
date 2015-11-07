#ifndef  DISPLAYFORMEXCEPTION_H
#define  DISPLAYFORMEXCEPTION_H

//Exception : Base
class PrecureModelDisplayerException
{
};

//Exception : Failed to Create Window during Initialization
class PMD_FailCreateWindowException : public PrecureModelDisplayerException
{
};

//Exception : Failed to Create D3D11Device
class PMD_FailCreateD3D11DeviceException : public PrecureModelDisplayerException
{
};

//Exception : Failed to Create SwapChain
class PMD_FailCreateSwapChainException : public PrecureModelDisplayerException
{
};

//Exception : Failed to Create RenderTargetView
class PMD_FailCreateRenderTargetViewException : public PrecureModelDisplayerException
{
};

//Exveption : Failed to Create DepthStencilView
class PMD_FailCreateDepthStencilViewException : public PrecureModelDisplayerException
{
};

#endif